#include <math.h>
#include <stdio.h>

// CSAPP - 第八章作业

// 8.11

/*
4

i=0,fork一次，共有2个子进程；
i=1,fork一次，共有4个子进程；
所以打印4行"hello"
*/

// 8.15
/*
打印5行"hello"
*/


// 8.19

/*
打印2的n次方个"hello"
*/

// 8.23

/*
错误的原因是在任何时刻只有一个信号处于等待状态，其他的都会被取消。
所以发送SIGUSR2信号第一个待处理时，第二个为等待状态，后三个则全部被取消
*/
