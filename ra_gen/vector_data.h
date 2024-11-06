/* generated vector header file - do not edit */
        #ifndef VECTOR_DATA_H
        #define VECTOR_DATA_H
        #ifdef __cplusplus
        extern "C" {
        #endif
                /* Number of interrupts allocated */
        #ifndef VECTOR_DATA_IRQ_COUNT
        #define VECTOR_DATA_IRQ_COUNT    (10)
        #endif
        /* ISR prototypes */
        void r_icu_isr(void);
        void gpt_counter_overflow_isr(void);
        void glcdc_line_detect_isr(void);
        void glcdc_underflow_1_isr(void);
        void mipi_dsi_seq0(void);
        void mipi_dsi_seq1(void);
        void mipi_dsi_vin1(void);
        void mipi_dsi_rcv(void);
        void mipi_dsi_ferr(void);
        void mipi_dsi_ppi(void);

        /* Vector table allocations */
        #define VECTOR_NUMBER_ICU_IRQ8 ((IRQn_Type) 0) /* ICU IRQ8 (External pin interrupt 8) */
        #define ICU_IRQ8_IRQn          ((IRQn_Type) 0) /* ICU IRQ8 (External pin interrupt 8) */
        #define VECTOR_NUMBER_GPT0_COUNTER_OVERFLOW ((IRQn_Type) 1) /* GPT0 COUNTER OVERFLOW (Overflow) */
        #define GPT0_COUNTER_OVERFLOW_IRQn          ((IRQn_Type) 1) /* GPT0 COUNTER OVERFLOW (Overflow) */
        #define VECTOR_NUMBER_GLCDC_LINE_DETECT ((IRQn_Type) 2) /* GLCDC LINE DETECT (Specified line) */
        #define GLCDC_LINE_DETECT_IRQn          ((IRQn_Type) 2) /* GLCDC LINE DETECT (Specified line) */
        #define VECTOR_NUMBER_GLCDC_UNDERFLOW_1 ((IRQn_Type) 3) /* GLCDC UNDERFLOW 1 (Graphic 1 underflow) */
        #define GLCDC_UNDERFLOW_1_IRQn          ((IRQn_Type) 3) /* GLCDC UNDERFLOW 1 (Graphic 1 underflow) */
        #define VECTOR_NUMBER_MIPIDSI_SEQ0 ((IRQn_Type) 4) /* MIPIDSI SEQ0 (Sequence operation channel 0 interrupt) */
        #define MIPIDSI_SEQ0_IRQn          ((IRQn_Type) 4) /* MIPIDSI SEQ0 (Sequence operation channel 0 interrupt) */
        #define VECTOR_NUMBER_MIPIDSI_SEQ1 ((IRQn_Type) 5) /* MIPIDSI SEQ1 (Sequence operation channel 1 interrupt) */
        #define MIPIDSI_SEQ1_IRQn          ((IRQn_Type) 5) /* MIPIDSI SEQ1 (Sequence operation channel 1 interrupt) */
        #define VECTOR_NUMBER_MIPIDSI_VIN1 ((IRQn_Type) 6) /* MIPIDSI VIN1 (Video-Input operation channel1 interrupt) */
        #define MIPIDSI_VIN1_IRQn          ((IRQn_Type) 6) /* MIPIDSI VIN1 (Video-Input operation channel1 interrupt) */
        #define VECTOR_NUMBER_MIPIDSI_RCV ((IRQn_Type) 7) /* MIPIDSI RCV (DSI packet receive interrupt) */
        #define MIPIDSI_RCV_IRQn          ((IRQn_Type) 7) /* MIPIDSI RCV (DSI packet receive interrupt) */
        #define VECTOR_NUMBER_MIPIDSI_FERR ((IRQn_Type) 8) /* MIPIDSI FERR (DSI fatal error interrupt) */
        #define MIPIDSI_FERR_IRQn          ((IRQn_Type) 8) /* MIPIDSI FERR (DSI fatal error interrupt) */
        #define VECTOR_NUMBER_MIPIDSI_PPI ((IRQn_Type) 9) /* MIPIDSI PPI (DSI D-PHY PPI interrupt) */
        #define MIPIDSI_PPI_IRQn          ((IRQn_Type) 9) /* MIPIDSI PPI (DSI D-PHY PPI interrupt) */
        #ifdef __cplusplus
        }
        #endif
        #endif /* VECTOR_DATA_H */