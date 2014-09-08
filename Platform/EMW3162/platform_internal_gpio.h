/*
 * Copyright 2014, Broadcom Corporation
 * All Rights Reserved.
 *
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Broadcom Corporation;
 * the contents of this file may not be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior
 * written permission of Broadcom Corporation.
 */
#pragma once

#include "platform.h"

/******************************************************
 *                      Macros
 ******************************************************/

/******************************************************
 *                    Constants
 ******************************************************/

#define WLAN_POWERSAVE_CLOCK_FREQUENCY 32768 /* 32768Hz        */
#define WLAN_POWERSAVE_CLOCK_DUTY_CYCLE   50 /* 50% duty-cycle */

/******************************************************
 *                   Enumerations
 ******************************************************/

/* These are internal module connections only */
typedef enum
{
    MICO_GPIO_WLAN_POWERSAVE_CLOCK = MICO_GPIO_MAX,
    MICO_SYS_LED,
} wiced_extended_gpio_t;

typedef enum
{
    MICO_PWM_WLAN_POWERSAVE_CLOCK = MICO_PWM_MAX
} wiced_extended_pwm_t;

/******************************************************
 *                 Type Definitions
 ******************************************************/

/******************************************************
 *                    Structures
 ******************************************************/

/******************************************************
 *                 Global Variables
 ******************************************************/

/******************************************************
 *               Function Declarations
 ******************************************************/
