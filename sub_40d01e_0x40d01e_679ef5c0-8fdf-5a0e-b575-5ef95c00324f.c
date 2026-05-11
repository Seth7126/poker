// ============================================================
// 函数名称: sub_40d01e
// 虚拟地址: 0x40d01e
// WARP GUID: 679ef5c0-8fdf-5a0e-b575-5ef95c00324f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40d5c1, sub_40d0dc
// [被调用的父级函数]: sub_4097ab, sub_409bbc
// ============================================================

void* __thiscallsub_40d01e(char arg1, char* arg2 @ eax, int32_t arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t eax = 0x13
    int32_t eax = 0x13
    
    if (arg1 == 0)
        eax = arg4
        
        if (eax s< 2)
            eax = 2
        
        if (eax s> 0x12)
            eax = 0x12
    
    int32_t var_30 = eax
    int32_t eax_1 = 0x270f
    
    if (arg5 u>= 2)
        eax_1 = arg3
    
    int32_t var_34 = eax_1
    int32_t* edx
    sub_40d5c1(arg1, edx)
    char* edi = arg2
    int16_t var_20
    
    if (zx.d(var_20) - 0x7fff u>= 2)
        uint32_t ebx_1 = zx.d(arg5)
        
        if (ebx_1.b != 1 && (ebx_1.b u> 4 || sx.d(var_20) s> eax))
            ebx_1.b = 0
        
        (*((ebx_1 << 2) + &data_40d0bf))()
    else
        int32_t __saved_ebp
        sub_40d0dc(&__saved_ebp, edi)
        edi = __builtin_memcpy(edi, (zx.d(var_20) - 0x7fff) * 3 + 0x40d018, 3)
    
    return edi - arg2
}
