/* FreeEMS - the open source engine management system
 *
 * Copyright 2010 Fred Cooke
 *
 * This file is part of the FreeEMS project.
 *
 * FreeEMS software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * FreeEMS software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with any FreeEMS software.  If not, see http://www.gnu.org/licenses/
 *
 * We ask that if you make any changes to this file you email them upstream to
 * us at admin(at)diyefi(dot)org or, even better, fork the code on github.com!
 *
 * Thank you for choosing FreeEMS to run your engine!
 */


/** @file
 *
 * @ingroup dataInitialisers
 *
 * @brief The lambda table as used on Sean's turbo LT1 Camaro
 *
 * This file only contains the data to be hash included into the lambda tables
 * in the fuel table files for car specific builds.
 *
 * @author Fred Cooke
 */


/// TODO @todo this is all wrongly laid out now, due to Dave's whinging, so needs fixing...
/* Laid out to make sense for 16 RPM and 16 Load bins, many extras on end to make up size. */
/* Load based AFR for now. */
///* 14.7,   14.7,  14.35,   14.0,   13.5,   13.0,   12.5,  12.25,   12.0,  11.75,   11.5,  11.25,   11.0
//  32768,  32768,  31987,  31207,  30093,  28978,  27863,  27307,  26749,  26192,  25635,  25078,  24520

// Low RPM                                                                                                           High RPM
//100     500     900    1300    1800    2250    2700    3150    3600    4050    4500    4950    5400    5850    6300    6750 // Vacuum
32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768, //  15
32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768, //  30
32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768, //  45
31207,  31207,  31207,  31207,  31207,  31207,  31207,  31207,  31207,  31207,  31207,  31207,  31207,  31207,  31207,  31207, //  60

30093,  30093,  30093,  30093,  30093,  30093,  30093,  30093,  30093,  30093,  30093,  30093,  30093,  30093,  30093,  30093, //  75
28978,  28978,  28978,  28978,  28978,  28978,  28978,  28978,  28978,  28978,  28978,  28978,  28978,  28978,  28978,  28978, //  90
27863,  27863,  27863,  27863,  27863,  27863,  27863,  27863,  27863,  27863,  27863,  27863,  27863,  27863,  27863,  27863, // 105
27307,  27307,  27307,  27307,  27307,  27307,  27307,  27307,  27307,  27307,  27307,  27307,  27307,  27307,  27307,  27307, // 120

26749,  26749,  26749,  26749,  26749,  26749,  26749,  26749,  26749,  26749,  26749,  26749,  26749,  26749,  26749,  26749, // 135
26192,  26192,  26192,  26192,  26192,  26192,  26192,  26192,  26192,  26192,  26192,  26192,  26192,  26192,  26192,  26192, // 150
25635,  25635,  25635,  25635,  25635,  25635,  25635,  25635,  25635,  25635,  25635,  25635,  25635,  25635,  25635,  25635, // 165
25078,  25078,  25078,  25078,  25078,  25078,  25078,  25078,  25078,  25078,  25078,  25078,  25078,  25078,  25078,  25078, // 180

24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520, // 195
24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520, // 210
24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520, // 225
24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520,  24520, // 225.01
//100     500     900    1300    1800    2250    2700    3150    3600    4050    4500    4950    5400    5850    6300    6750 //  WOT
// Low RPM                                                                                                           High RPM


32768,  32768,  32768,
32768,  32768,  32768,
32768,  32768,  32768,
32768,  32768,  32768,

32768,  32768,  32768,
32768,  32768,  32768,
32768,  32768,  32768,
32768,  32768,  32768,

32768,  32768,  32768,
32768,  32768,  32768,
32768,  32768,  32768,
32768,  32768,  32768,

32768,  32768,  32768,
32768,  32768,  32768,
32768,  32768,  32768,
32768,  32768,  32768,



32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,

32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,  32768,
32768,  32768,  32768,  32768,  32768,  32768 /* 6 extras to allow different axis sizes. */

