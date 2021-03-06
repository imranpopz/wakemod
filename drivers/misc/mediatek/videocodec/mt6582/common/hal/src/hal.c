/*
* Copyright (C) 2011-2014 MediaTek Inc.
* 
* This program is free software: you can redistribute it and/or modify it under the terms of the 
* GNU General Public License version 2 as published by the Free Software Foundation.
* 
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with this program.
* If not, see <http://www.gnu.org/licenses/>.
*/

#include "hal_api.h"

VAL_RESULT_T eHalInit(VAL_HANDLE_T *a_phHalHandle)
{
    return VAL_RESULT_NO_ERROR;
}

VAL_RESULT_T eHalDeInit(VAL_HANDLE_T *a_phHalHandle)
{

    return VAL_RESULT_NO_ERROR;
}


VAL_RESULT_T eHalCmdProc(VAL_HANDLE_T *a_hHalHandle, HAL_CMD_T a_eHalCmd, VAL_VOID_T *a_pvInParam, VAL_VOID_T *a_pvOutParam)
{
    switch(a_eHalCmd)
    {
    case HAL_CMD_SET_CMD_QUEUE:
        break;
    case HAL_CMD_SET_POWER:
        break;
    case HAL_CMD_SET_ISR:
        break;
    default:
        return VAL_RESULT_INVALID_PARAMETER;
    }

    return VAL_RESULT_NO_ERROR;
}
