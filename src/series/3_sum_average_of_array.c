/* Anubhav Saini
 * 
 * for third post in series "A lot of Code"
 * 
 * this file deals with finding sum and average of an integer array
 */

#include "common.h"

void FindSumAndAverageOfIntArray ( int * array, int n, int * sum, int * avg )
/* array	is an integer array : int array [];
 * n		is count of elements in array
 * sum		is reference to sum variable, passed as &sum.
 * avg		is reference to average variable, passed as &avg.
 ****************************************************************************
 * notice: we don't mess with previous value of sum, this can be a good
 *         or bad thing, depending upon circumstances.
 */
{
    int i = 0;
    for ( i = 0; i < n; ++i ){
        *sum += array[i];
    }
    *avg = *sum / n;
}

void FindSumAndAverageOfIntArray_DAvg ( int * array, int n, int * sum, double * avg )
/* array	is an integer array : int array [];
 * n		is count of elements in array
 * sum		is reference to sum variable, passed as &sum.
 * avg		is reference to average variable, passed as &avg. Avg is double.
 ************************************************************************************
 * notice: we don't mess with previous value of sum, this can be a good
 *         or bad thing, depending upon circumstances.
 */
{
    int i = 0;
    for ( i = 0; i < n; ++i ){
        *sum += array[i];
    }
    *avg = (double)*sum / (double)n;
}
