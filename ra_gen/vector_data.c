/* generated vector source file - do not edit */
        #include "bsp_api.h"
        /* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
        #if VECTOR_DATA_IRQ_COUNT > 0
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_MAX_ENTRIES] BSP_PLACE_IN_SECTION(BSP_SECTION_APPLICATION_VECTORS) =
        {
                        [0] = r_icu_isr, /* ICU IRQ8 (External pin interrupt 8) */
            [1] = gpt_counter_overflow_isr, /* GPT0 COUNTER OVERFLOW (Overflow) */
            [2] = glcdc_line_detect_isr, /* GLCDC LINE DETECT (Specified line) */
            [3] = glcdc_underflow_1_isr, /* GLCDC UNDERFLOW 1 (Graphic 1 underflow) */
            [4] = mipi_dsi_seq0, /* MIPIDSI SEQ0 (Sequence operation channel 0 interrupt) */
            [5] = mipi_dsi_seq1, /* MIPIDSI SEQ1 (Sequence operation channel 1 interrupt) */
            [6] = mipi_dsi_vin1, /* MIPIDSI VIN1 (Video-Input operation channel1 interrupt) */
            [7] = mipi_dsi_rcv, /* MIPIDSI RCV (DSI packet receive interrupt) */
            [8] = mipi_dsi_ferr, /* MIPIDSI FERR (DSI fatal error interrupt) */
            [9] = mipi_dsi_ppi, /* MIPIDSI PPI (DSI D-PHY PPI interrupt) */
        };
        #if BSP_FEATURE_ICU_HAS_IELSR
        const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_MAX_ENTRIES] =
        {
            [0] = BSP_PRV_VECT_ENUM(EVENT_ICU_IRQ8,GROUP0), /* ICU IRQ8 (External pin interrupt 8) */
            [1] = BSP_PRV_VECT_ENUM(EVENT_GPT0_COUNTER_OVERFLOW,GROUP1), /* GPT0 COUNTER OVERFLOW (Overflow) */
            [2] = BSP_PRV_VECT_ENUM(EVENT_GLCDC_LINE_DETECT,GROUP2), /* GLCDC LINE DETECT (Specified line) */
            [3] = BSP_PRV_VECT_ENUM(EVENT_GLCDC_UNDERFLOW_1,GROUP3), /* GLCDC UNDERFLOW 1 (Graphic 1 underflow) */
            [4] = BSP_PRV_VECT_ENUM(EVENT_MIPIDSI_SEQ0,GROUP4), /* MIPIDSI SEQ0 (Sequence operation channel 0 interrupt) */
            [5] = BSP_PRV_VECT_ENUM(EVENT_MIPIDSI_SEQ1,GROUP5), /* MIPIDSI SEQ1 (Sequence operation channel 1 interrupt) */
            [6] = BSP_PRV_VECT_ENUM(EVENT_MIPIDSI_VIN1,GROUP6), /* MIPIDSI VIN1 (Video-Input operation channel1 interrupt) */
            [7] = BSP_PRV_VECT_ENUM(EVENT_MIPIDSI_RCV,GROUP7), /* MIPIDSI RCV (DSI packet receive interrupt) */
            [8] = BSP_PRV_VECT_ENUM(EVENT_MIPIDSI_FERR,GROUP0), /* MIPIDSI FERR (DSI fatal error interrupt) */
            [9] = BSP_PRV_VECT_ENUM(EVENT_MIPIDSI_PPI,GROUP1), /* MIPIDSI PPI (DSI D-PHY PPI interrupt) */
        };
        #endif
        #endif