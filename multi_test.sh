#!/bin/bash
#usage: ./multi_test.sh TESTFILE

PUSH_SWAP=~/School_42/push_swap/push_swap
CHECKER=~/School_42/push_swap/checker_linux

LINE_NB=$(wc -l $1 | cut -d' ' -f1)
LINE_INDEX=1
MAX_OPS_NB=0
NB_ERRORS=0
NB_OK=0

echo "file has ${LINE_NB} lines"
echo ""

while [ ${LINE_INDEX} -le ${LINE_NB} ]
do
#	echo ${LINE_INDEX}
	ARGS=$(sed "${LINE_INDEX}q;d" $1)
	echo "args: ${ARGS}"
	${PUSH_SWAP} ${ARGS} 2>/dev/null >output_multi_test
	OPS_NB=$(wc -l output_multi_test | cut -d' ' -f1)
	echo "ops: ${OPS_NB}"

	if [ ${OPS_NB} -gt ${MAX_OPS_NB} ]
	then
		MAX_OPS_NB=${OPS_NB}
		WORST_CASES="(${ARGS})"
		WORST_NB=1
	elif [ ${OPS_NB} -eq ${MAX_OPS_NB} ]
	then
		WORST_CASES+=" (${ARGS}) "
		let "WORST_NB++"
	fi

	CHECKER_OUPUT=$(cat output_multi_test | ${CHECKER} ${ARGS})
	if [ "${CHECKER_OUPUT}" = "OK" ]
	then
		let "NB_OK++"
	else
		echo "KO!!!!"
		let "NB_ERRORS++"
		echo "${ARGS}:${CHECKER_OUPUT}" >> errors.txt
	fi
	let "LINE_INDEX++"
done
echo ""
echo "worst cases: ${WORST_CASES}"
echo "max ops: ${MAX_OPS_NB} (${WORST_NB} cases)"
echo "OK: ${NB_OK}/${LINE_NB}"
echo "fails: ${NB_ERRORS}"
rm output_multi_test
