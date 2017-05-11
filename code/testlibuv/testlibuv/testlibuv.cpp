#include "stdafx.h"
#include "cat.h"

int main(int argc, char **argv){
	char path[256] = "E://a.txt";
	uv_fs_open(uv_default_loop(), &open_req, path, O_RDONLY, 0, on_open);
	uv_run(uv_default_loop(), UV_RUN_DEFAULT);

	uv_fs_req_cleanup(&open_req);
	uv_fs_req_cleanup(&read_req);
	uv_fs_req_cleanup(&write_req);
	return 0;
}