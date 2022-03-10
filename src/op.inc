// Nonexistent ops that are useful for tagging various things
OP(BAD_OP)
OP(ASM_LABEL)
OP(ASM_DELAY)
OP(MAYBE_STA)
OP(MAYBE_STX)
OP(MAYBE_STY)
OP(MAYBE_SAX)
OP(MAYBE_STORE_C)

// Standard MOS 6502 ops
OP(ADC_IMMEDIATE)
OP(ADC_ZERO_PAGE)
OP(ADC_ZERO_PAGE_X)
OP(ADC_ABSOLUTE)
OP(ADC_ABSOLUTE_X)
OP(ADC_ABSOLUTE_Y)
OP(ADC_INDIRECT_X)
OP(ADC_INDIRECT_Y)
OP(AND_IMMEDIATE)
OP(AND_ZERO_PAGE)
OP(AND_ZERO_PAGE_X)
OP(AND_ABSOLUTE)
OP(AND_ABSOLUTE_X)
OP(AND_ABSOLUTE_Y)
OP(AND_INDIRECT_X)
OP(AND_INDIRECT_Y)
OP(ASL_IMPLIED)
OP(ASL_ZERO_PAGE)
OP(ASL_ZERO_PAGE_X)
OP(ASL_ABSOLUTE)
OP(ASL_ABSOLUTE_X)
OP(BCC_RELATIVE)
OP(BCC_LONG)
OP(BCS_RELATIVE)
OP(BCS_LONG)
OP(BEQ_RELATIVE)
OP(BEQ_LONG)
OP(BIT_ZERO_PAGE)
OP(BIT_ABSOLUTE)
OP(BMI_RELATIVE)
OP(BMI_LONG)
OP(BNE_RELATIVE)
OP(BNE_LONG)
OP(BPL_RELATIVE)
OP(BPL_LONG)
OP(BRK_IMPLIED)
OP(BVC_RELATIVE)
OP(BVC_LONG)
OP(BVS_RELATIVE)
OP(BVS_LONG)
OP(CLC_IMPLIED)
OP(CLD_IMPLIED)
OP(CLI_IMPLIED)
OP(CLV_IMPLIED)
OP(CMP_IMMEDIATE)
OP(CMP_ZERO_PAGE)
OP(CMP_ZERO_PAGE_X)
OP(CMP_ABSOLUTE)
OP(CMP_ABSOLUTE_X)
OP(CMP_ABSOLUTE_Y)
OP(CMP_INDIRECT_X)
OP(CMP_INDIRECT_Y)
OP(CPX_IMMEDIATE)
OP(CPX_ZERO_PAGE)
OP(CPX_ABSOLUTE)
OP(CPY_IMMEDIATE)
OP(CPY_ZERO_PAGE)
OP(CPY_ABSOLUTE)
OP(DEC_ZERO_PAGE)
OP(DEC_ZERO_PAGE_X)
OP(DEC_ABSOLUTE)
OP(DEC_ABSOLUTE_X)
OP(DEX_IMPLIED)
OP(DEY_IMPLIED)
OP(EOR_IMMEDIATE)
OP(EOR_ZERO_PAGE)
OP(EOR_ZERO_PAGE_X)
OP(EOR_ABSOLUTE)
OP(EOR_ABSOLUTE_X)
OP(EOR_ABSOLUTE_Y)
OP(EOR_INDIRECT_X)
OP(EOR_INDIRECT_Y)
OP(INC_ZERO_PAGE)
OP(INC_ZERO_PAGE_X)
OP(INC_ABSOLUTE)
OP(INC_ABSOLUTE_X)
OP(INX_IMPLIED)
OP(INY_IMPLIED)
OP(JMP_ABSOLUTE)
OP(JMP_INDIRECT)
OP(JSR_ABSOLUTE)
OP(LDA_IMMEDIATE)
OP(LDA_ZERO_PAGE)
OP(LDA_ZERO_PAGE_X)
OP(LDA_ABSOLUTE)
OP(LDA_ABSOLUTE_X)
OP(LDA_ABSOLUTE_Y)
OP(LDA_INDIRECT_X)
OP(LDA_INDIRECT_Y)
OP(LDX_IMMEDIATE)
OP(LDX_ZERO_PAGE)
OP(LDX_ZERO_PAGE_Y)
OP(LDX_ABSOLUTE)
OP(LDX_ABSOLUTE_Y)
OP(LDY_IMMEDIATE)
OP(LDY_ZERO_PAGE)
OP(LDY_ZERO_PAGE_X)
OP(LDY_ABSOLUTE)
OP(LDY_ABSOLUTE_X)
OP(LSR_IMPLIED)
OP(LSR_ZERO_PAGE)
OP(LSR_ZERO_PAGE_X)
OP(LSR_ABSOLUTE)
OP(LSR_ABSOLUTE_X)
OP(NOP_IMPLIED)
OP(ORA_IMMEDIATE)
OP(ORA_ZERO_PAGE)
OP(ORA_ZERO_PAGE_X)
OP(ORA_ABSOLUTE)
OP(ORA_ABSOLUTE_X)
OP(ORA_ABSOLUTE_Y)
OP(ORA_INDIRECT_X)
OP(ORA_INDIRECT_Y)
OP(PHA_IMPLIED)
OP(PHP_IMPLIED)
OP(PLA_IMPLIED)
OP(PLP_IMPLIED)
OP(ROL_IMPLIED)
OP(ROL_ZERO_PAGE)
OP(ROL_ZERO_PAGE_X)
OP(ROL_ABSOLUTE)
OP(ROL_ABSOLUTE_X)
OP(ROR_IMPLIED)
OP(ROR_ZERO_PAGE)
OP(ROR_ZERO_PAGE_X)
OP(ROR_ABSOLUTE)
OP(ROR_ABSOLUTE_X)
OP(RTI_IMPLIED)
OP(RTS_IMPLIED)
OP(SBC_IMMEDIATE)
OP(SBC_ZERO_PAGE)
OP(SBC_ZERO_PAGE_X)
OP(SBC_ABSOLUTE)
OP(SBC_ABSOLUTE_X)
OP(SBC_ABSOLUTE_Y)
OP(SBC_INDIRECT_X)
OP(SBC_INDIRECT_Y)
OP(SEC_IMPLIED)
OP(SED_IMPLIED)
OP(SEI_IMPLIED)
OP(STA_ZERO_PAGE)
OP(STA_ZERO_PAGE_X)
OP(STA_ABSOLUTE)
OP(STA_ABSOLUTE_X)
OP(STA_ABSOLUTE_Y)
OP(STA_INDIRECT_X)
OP(STA_INDIRECT_Y)
OP(STX_ZERO_PAGE)
OP(STX_ZERO_PAGE_Y)
OP(STX_ABSOLUTE)
OP(STY_ZERO_PAGE)
OP(STY_ZERO_PAGE_X)
OP(STY_ABSOLUTE)
OP(TAX_IMPLIED)
OP(TAY_IMPLIED)
OP(TSX_IMPLIED)
OP(TXA_IMPLIED)
OP(TXS_IMPLIED)
OP(TYA_IMPLIED)
// Illegal:
OP(LAX_ZERO_PAGE)
OP(LAX_ZERO_PAGE_Y)
OP(LAX_ABSOLUTE)
OP(LAX_ABSOLUTE_Y)
OP(LAX_INDIRECT_X)
OP(LAX_INDIRECT_Y)
OP(AXS_IMMEDIATE)
OP(ANC_IMMEDIATE)
OP(ALR_IMMEDIATE)
OP(ARR_IMMEDIATE)
OP(SAX_ZERO_PAGE)
OP(SAX_ZERO_PAGE_Y)
OP(SAX_ABSOLUTE)
OP(SAX_INDIRECT_X)
OP(SKB_IMPLIED)
OP(IGN_IMPLIED)