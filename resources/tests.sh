cd .. && make && cd ./resources
echo "test: 3"
sh ./test_3.sh | grep "KO"
echo "test: 4"
sh ./test_4.sh | grep "KO"
echo "test: 5"
sh ./test_5.sh | grep "KO"
echo "test: 100 (10 combinations)"
sh ./test_100.sh | grep "KO"
echo "test: 500 (10 combinations)"
sh ./test_500.sh | grep "KO"