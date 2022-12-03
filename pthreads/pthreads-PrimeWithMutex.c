//Dane Coleman
#include <stdio.h>
#include <stdlib.h>
#include <sys/times.h>
#include <time.h>
#include <unistd.h>
#include <pthread.h>


pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;   // KEY

int count = 1;  // SHARED VARIABLE AMONG THREADS
int numOfPrimes = 0;
int limit;
void countNumberOfPrimeNumber( void *empty )
{

  do {
   int num = 2;
          pthread_mutex_lock ( &lock); // blocked
          int localCount = ++count;     // IMPORTANT
          pthread_mutex_unlock ( &lock);

   for ( num = 2 ; num < localCount ; num++ )
      {
         if ( localCount%num == 0 )
            break;
      }
   if ( num == localCount) {
          pthread_mutex_lock ( &lock); // blocked
          numOfPrimes++;
          pthread_mutex_unlock ( &lock);
      //printf ( "prime number : %d %d \n", numOfPrimes, count);
   }

  } while ( count < limit );
}

main(int argc, char *argv[ ])
{
     pthread_t T1, T2;
     int  id1, id2;
     clock_t start, end;
    limit = atoi (argv[1]);

   struct tms st_start, st_end;
   start = times (&st_start);

     pthread_t t1 , t2, t3, t4, t5, t6, t7, t8, t9, t10; // two threads
     int  thread1 ;
     int  thread2 ;
     int  thread3 ;
     int  thread4 ;
     int  thread5 ;
     int  thread6 ;
     int  thread7 ;
     int  thread8 ;
     int  thread9 ;
     int  thread10 ;




   thread1 =
      pthread_create ( &t1, NULL, (void *)countNumberOfPrimeNumber, (void *) NULL);

   thread2 =
      pthread_create ( &t2, NULL, (void *)countNumberOfPrimeNumber, (void *) NULL);

   thread3 =
      pthread_create ( &t3, NULL, (void *)countNumberOfPrimeNumber, (void *) NULL);

   thread4 =
      pthread_create ( &t4, NULL, (void *)countNumberOfPrimeNumber, (void *) NULL);

   thread5 =
      pthread_create ( &t5, NULL, (void *)countNumberOfPrimeNumber, (void *) NULL);

   thread6 =
      pthread_create ( &t6, NULL, (void *)countNumberOfPrimeNumber, (void *) NULL);

   thread7 =
      pthread_create ( &t7, NULL, (void *)countNumberOfPrimeNumber, (void *) NULL);

   thread8 =
      pthread_create ( &t8, NULL, (void *)countNumberOfPrimeNumber, (void *) NULL);

   thread9 =
      pthread_create ( &t9, NULL, (void *)countNumberOfPrimeNumber, (void *) NULL);

   thread10 =
      pthread_create ( &t10, NULL, (void *)countNumberOfPrimeNumber, (void *) NULL);


   if (thread1 == 0)
      printf (" Thread 1 success \n");
   if (thread2 == 0)
      printf (" Thread 2 success \n");
   if (thread3 == 0)
      printf (" Thread 3 success \n");
   if (thread4 == 0)
      printf (" Thread 4 success \n");
   if (thread5 == 0)
      printf (" Thread 5 success \n");
   if (thread6 == 0)
      printf (" Thread 6 success \n");
   if (thread7 == 0)
      printf (" Thread 7 success \n");
   if (thread8 == 0)
      printf (" Thread 8 success \n");
   if (thread9 == 0)
      printf (" Thread 9 success \n");
   if (thread10 == 0)
      printf (" Thread 10 success \n");
   pthread_join( t1 , NULL);
   pthread_join( t2 , NULL);
   pthread_join( t3 , NULL);
   pthread_join( t4 , NULL);
   pthread_join( t5 , NULL);
   pthread_join( t6 , NULL);
   pthread_join( t7 , NULL);
   pthread_join( t8 , NULL);
   pthread_join( t9 , NULL);
   pthread_join( t10 , NULL);

   end = times (&st_end);

printf ( "Time taken by system command %6.2f \n", (float)( end-start)/sysconf( _SC_CLK_TCK ) );

printf ( "Time taken by parent process in User mode %6.2f \n", (float)( st_end.tms_utime)/sysconf( _SC_CLK_TCK ) );
printf ( "Time taken by parent process in Kernel mode %6.2f \n", (float)( st_end.tms_stime)/sysconf( _SC_CLK_TCK ) );

printf ( "Time taken by child process in user mode %6.2f \n", (float)( st_end.tms_cutime)/sysconf( _SC_CLK_TCK ) );
printf ( "Time taken by child process in kernel mode %6.2f \n", (float)( st_end.tms_cstime)/sysconf( _SC_CLK_TCK ) );


     printf ( "Number of prime numbers : %d \n", numOfPrimes );

}





