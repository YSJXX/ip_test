#include <stdio.h>
#include <stdint.h>
#include "ip_test.h"

void allprint(){
	uint8_t packet[]={
    0x00,0x50,0x56,0xe0,0x00,0xbe,0x00,0x0c,0x29,0x02,0x08,0xf6,0x08,0x00,0x45,0x00,
    0x01,0x7d,0x59,0xb7,0x40,0x00,0x40,0x06,0x84,0x92,0xc0,0xa8,0xc7,0x8c,0xaf,0xd5,
    0x23,0x27,0xab,0x42,0x00,0x50,0x93,0x00,0x1e,0x6c,0x0c,0x26,0xbd,0x33,0x50,0x18,
    0x72,0x10,0x5c,0xa1,0x00,0x00,0x47,0x45,0x54,0x20,0x2f,0x20,0x48,0x54,0x54,0x50,
    0x2f,0x31,0x2e,0x31,0x0d,0x0a,0x48,0x6f,0x73,0x74,0x3a,0x20,0x74,0x65,0x73,0x74,
    0x2e,0x67,0x69,0x6c,0x67,0x69,0x6c,0x2e,0x6e,0x65,0x74,0x0d,0x0a,0x55,0x73,0x65,
    0x72,0x2d,0x41,0x67,0x65,0x6e,0x74,0x3a,0x20,0x4d,0x6f,0x7a,0x69,0x6c,0x6c,0x61,
    0x2f,0x35,0x2e,0x30,0x20,0x28,0x58,0x31,0x31,0x3b,0x20,0x4c,0x69,0x6e,0x75,0x78,
    0x20,0x78,0x38,0x36,0x5f,0x36,0x34,0x3b,0x20,0x72,0x76,0x3a,0x36,0x30,0x2e,0x30,
    0x29,0x20,0x47,0x65,0x63,0x6b,0x6f,0x2f,0x32,0x30,0x31,0x30,0x30,0x31,0x30,0x31,
    0x20,0x46,0x69,0x72,0x65,0x66,0x6f,0x78,0x2f,0x36,0x30,0x2e,0x30,0x0d,0x0a,0x41,
    0x63,0x63,0x65,0x70,0x74,0x3a,0x20,0x74,0x65,0x78,0x74,0x2f,0x68,0x74,0x6d,0x6c,
    0x2c,0x61,0x70,0x70,0x6c,0x69,0x63,0x61,0x74,0x69,0x6f,0x6e,0x2f,0x78,0x68,0x74,
    0x6d,0x6c,0x2b,0x78,0x6d,0x6c,0x2c,0x61,0x70,0x70,0x6c,0x69,0x63,0x61,0x74,0x69,
    0x6f,0x6e,0x2f,0x78,0x6d,0x6c,0x3b,0x71,0x3d,0x30,0x2e,0x39,0x2c,0x2a,0x2f,0x2a,
    0x3b,0x71,0x3d,0x30,0x2e,0x38,0x0d,0x0a,0x41,0x63,0x63,0x65,0x70,0x74,0x2d,0x4c,
    0x61,0x6e,0x67,0x75,0x61,0x67,0x65,0x3a,0x20,0x65,0x6e,0x2d,0x55,0x53,0x2c,0x65,
    0x6e,0x3b,0x71,0x3d,0x30,0x2e,0x35,0x0d,0x0a,0x41,0x63,0x63,0x65,0x70,0x74,0x2d,
    0x45,0x6e,0x63,0x6f,0x64,0x69,0x6e,0x67,0x3a,0x20,0x67,0x7a,0x69,0x70,0x2c,0x20,
    0x64,0x65,0x66,0x6c,0x61,0x74,0x65,0x0d,0x0a,0x43,0x6f,0x6e,0x6e,0x65,0x63,0x74,
    0x69,0x6f,0x6e,0x3a,0x20,0x6b,0x65,0x65,0x70,0x2d,0x61,0x6c,0x69,0x76,0x65,0x0d,
    0x0a,0x55,0x70,0x67,0x72,0x61,0x64,0x65,0x2d,0x49,0x6e,0x73,0x65,0x63,0x75,0x72,
    0x65,0x2d,0x52,0x65,0x71,0x75,0x65,0x73,0x74,0x73,0x3a,0x20,0x31,0x0d,0x0a,0x43,
    0x61,0x63,0x68,0x65,0x2d,0x43,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x3a,0x20,0x6d,0x61,
    0x78,0x2d,0x61,0x67,0x65,0x3d,0x30,0x0d,0x0a,0x0d,0x0a };
	
	 //dmac
    printf("dmac address: %02x:%02x:%02x:%02x:%02x:%02x\n",packet[0],packet[1],packet[2],packet[3],packet[4],packet[5]);
    //smac
    printf("smac address: %02x:%02x:%02x:%02x:%02x:%02x\n",packet[6],packet[7],packet[8],packet[9],packet[10],packet[11]);
    //sip
    printf("sip address: %d.%d.%d.%d\n",packet[26],packet[27],packet[28],packet[29]);
    //dip
    printf("dip address: %d.%d.%d.%d\n",packet[30],packet[31],packet[32],packet[33]);
    //sport
    printf("sport: %d\n",(packet[34]<<8)+packet[35]);
    //dport
    printf("dport: %d\n",(packet[36]<<8)+packet[37]);
    //http
    printf("http: ");
    for(int i=1;i<=16;i++){
        printf("%c",packet[75+i]);
    }
    printf("\n");
}



