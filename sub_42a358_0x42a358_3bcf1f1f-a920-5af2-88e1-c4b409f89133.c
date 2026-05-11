// ============================================================
// 函数名称: sub_42a358
// 虚拟地址: 0x42a358
// WARP GUID: 3bcf1f1f-a920-5af2-88e1-c4b409f89133
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410948, sub_42a4d8, sub_419a38, sub_4108e4, sub_410524, sub_4199dc
// [被调用的父级函数]: sub_42ec9c, sub_42f010
// ============================================================

int32_tsub_42a358()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    void* eax_1 = sub_4108e4(data_531790)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_4 = *(eax_1 + 8) - 1
    
    if (eax_4 s>= 0)
        int32_t var_8_1 = eax_4
        
        do
            ebp_1[-3] = sub_410524(ebp_1[-2], ebp_1[-1])
            char eax_8
            eax_8, ebp_1 = sub_4199dc(ebp_1[-3])
            esp = &esp[5]
            
            if (eax_8 != 0)
                *(esp - 4) = ebp_1
                *(esp - 8) = j_sub_4037f0
                *(esp - 0xc) = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = esp - 0xc
                sub_42a4d8(ebp_1[-3])
                *(esp - 4)
                fsbase->NtTib.ExceptionList = *(esp - 0xc)
                *(esp - 4) = 0x42a3d5
                return sub_419a38(ebp_1[-3])
            
            ebp_1[-1] -= 1
        while (ebp_1[-1] != 0xffffffff)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_42a3fd
    return sub_410948(data_531790)
}
