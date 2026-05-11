// ============================================================
// 函数名称: sub_41341e
// 虚拟地址: 0x41341e
// WARP GUID: dac88607-8a21-51aa-b7f1-c60e7b420db9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410948, sub_4030d0, sub_403248, sub_410524, sub_40ca2c
// [被调用的父级函数]: sub_4132fc
// ============================================================

int32_tsub_41341e(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t ebx_1 = *(arg1[-1] + 8) - 1
    int32_t ebx_1 = *(arg1[-1] + 8) - 1
    
    if (ebx_1 s>= 0)
        int32_t i_1 = ebx_1 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            int32_t* eax_1 = sub_410524(arg1[-1], esi_1)
            
            if (sub_403248(eax_1, &data_40f80c) != 0)
                eax_1[8].w &= 0xff7f
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_4030d0(arg1[-1])
    fsbase->NtTib.ExceptionList = arg3
    sub_410948(data_531630)
    fsbase->NtTib.ExceptionList = arg5
    int32_t result = sub_40ca2c(data_531618)
    *arg1
    return result
}
