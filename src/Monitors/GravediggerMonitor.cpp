/*
 * GravediggerMonitor.cpp
 *
 *  Created on: Jul 3, 2016
 *      Author: jjax
 */

#include "GravediggerMonitor.h"



GravediggerMonitor::GravediggerMonitor(Gravedigger *digger, pthread_mutex_t mutex) : Monitor(digger, mutex)
{
}
