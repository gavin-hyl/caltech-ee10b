;-------------------------------------------------------------------------------
; switchdefs.inc
;
; Description:
;   This file contains definitions for the switch inputs and the debouncing 
;   constants
;
; Author:
;   Gavin Hua
;
; Revision History:
;   2024/05/03 - initial revision
;   2024/05/04 - added constants for auto-repeat
;   2024/06/09 - remove extra definitions
;   2024/06/20 - update comments
;-------------------------------------------------------------------------------



.EQU    BUTTON_DATA         = PINE          ;button data register

.EQU    DEBOUNCE_T          = 30            ; debounce time in interrupt ticks
                                            ; expected to be 30 ms
.EQU    AUTOREP_T           = 255           ; autorepeat time in interrupt ticks
                                            ; expected to be 255 ms

.EQU	START_BTN_MASK		= 0b10000000    ; mask for the start button
.EQU	MODE_BTN_MASK		= 0b01000000    ; mask for the mode button
.EQU	ROT_BTN_MASK		= 0b00100000    ; mask for the rotary push button
.EQU	ENC_MASK    		= 0b00011000    ; mask for the rotary encoder

.EQU    ENC_INIT_STATE      = 0b00000000    ; initial history of encoder
.EQU    ENC_BOUNCE_MASK     = 0b00110000    ; mask for the encoder bounce
.EQU    ENC_PREV_MASK       = 0b11000000    ; mask for the previous encoder state
.EQU    ENC_CCW_TURN        = 0b11100001    ; state for counterclockwise turn
.EQU    ENC_CW_TURN         = 0b11010010    ; state for clockwise turn
