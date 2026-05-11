// ============================================================
// 函数名称: sub_42046c
// 虚拟地址: 0x42046c
// WARP GUID: 8ee9bb24-10d4-52c5-beae-d125d57e965b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4202fc
// [被调用的父级函数]: sub_4204e7, sub_4209cb, __cfltcvt_init, sub_420453
// ============================================================

int32_t __stdcallsub_42046c(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (data_5316ee == 0)
    if (data_5316ee == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_1
        int32_t ebx_1
        int32_t edi_1
        eax_1, ebx_1, edi_1 = sub_4202fc(2, data_5316cc, sub_4204e7+5)
        data_5316cc = eax_1
        return data_5316cc(ebx_1, edi_1)
    
    int32_t result = 0
    
    if ((arg2 & 3) == 0)
        if (arg1[2] s<= 0 || arg1[3] s<= 0)
            return result
        
        if (data_5316c4(0) s<= *arg1)
            return result
        
        if (data_5316c4(1) s<= arg1[1])
            return result
    
    return 0x12340042
}
