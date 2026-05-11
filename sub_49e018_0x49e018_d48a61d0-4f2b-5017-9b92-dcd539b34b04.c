// ============================================================
// 函数名称: sub_49e018
// 虚拟地址: 0x49e018
// WARP GUID: d48a61d0-4f2b-5017-9b92-dcd539b34b04
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404188, sub_4048a0, sub_408ad8, sub_404780
// [被调用的父级函数]: sub_49e0e8, sub_49e1e0
// ============================================================

int32_t* __convention("regparm")sub_49e018(void* arg1, int32_t arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t* result = &var_1c
    int32_t ebx_1 = arg3
    
    if (ebx_1 s>= 0)
        int32_t temp0_1
        
        do
            int32_t esi_1 = *(arg2 + (ebx_1 << 2))
            temp0_1 = ebx_1
            ebx_1 -= 1
            *(result - 4) = esi_1
            result -= 4
        while (temp0_1 - 1 s>= 0)
    
    sub_4048a0(result, sub_4010c0, arg3 + 1)
    *(result - 4) = &var_4
    *(result - 8) = j_sub_4037f0
    TEB* fsbase
    *(result - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = result - 0xc
    
    if (arg3 s>= 0)
        int32_t i_1 = arg3 + 1
        int32_t edi_1 = 0
        int32_t* result_1 = result
        int32_t i
        
        do
            if (arg4 == 0)
                if (sub_408ad8(arg1, *result_1) != 0)
                    break
            else
                sub_404188(arg1, *result_1)
                
                if (arg4 == 0)
                    break
            
            edi_1 += 1
            result_1 = &result_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = *(result - 0xc)
    *(result - 4) = sub_49e0b9
    sub_404780(result, sub_4010c0, arg3 + 1)
    return result
}
