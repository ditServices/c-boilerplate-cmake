#include <stdio.h>

//fmpeg includes
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>

int main(int argc, char * argv[]){

  AVFormatContext *pFormatCtx = NULL;

  if(avformat_open_input(&pFormatCtx, argv[1], NULL, NULL)!=0){
    printf("Could not open file\n");
    return -1;
  }
  else {
    printf("Video Open\n");
  }
  
  if(avformat_find_stream_info(pFormatCtx, NULL) < 0) {
	  printf("Could not read stream info\n");
	  return -1;
  }

  av_dump_format(pFormatCtx, 0, argv[1], 0);

  
  avformat_close_input(&pFormatCtx);
  return 0;
}
