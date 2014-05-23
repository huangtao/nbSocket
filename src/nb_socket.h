/*
 * Non-block client socket
 * Write: huangtao117@gmail.com
 */
 
 int nbs_connect(const char* host);
 unsigned char* nbs_get_pack();
 int nbs_send(const unsigned char* data);