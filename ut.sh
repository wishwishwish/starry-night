scons mode=debug
echo '----------------------------------------'
./output/base_test/chef_count_dump_test
./output/base_test/chef_crypto_md5_op_test
./output/base_test/chef_defer_test
./output/base_test/chef_encoding_base64_op_test
./output/base_test/chef_filepath_op_test
./output/base_test/chef_strings_op_test
./output/base_test/chef_task_thread_test
./output/base_test/chef_thread_pool_test
./output/base_test/chef_wait_event_test
./output/base_test/chef_wait_event_counter_test

#./output/base_test/chef_http_op_test
./output/base_test/chef_log_test
echo '----------------------------------------'