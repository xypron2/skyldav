/* 
 * File:   pollmounts.h
 * 
 * Copyright 2012 Heinrich Schuchardt <xypron.glpk@gmx.de>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @file pollmounts.h
 * @brief Poll /proc/mounts to detect mount events.
 */
#ifndef POLLMOUNTS_H
#define	POLLMOUNTS_H

#ifdef	__cplusplus
extern "C" {
#endif

typedef void (*skyld_pollmountscallbackptr)();

int skyld_pollmountsstart(skyld_pollmountscallbackptr cbptr);
int skyld_pollmountsstop();

#ifdef	__cplusplus
}
#endif

#endif	/* POLLMOUNTS_H */

