// ============================================================
// 函数名称: sub_43d1a0
// 虚拟地址: 0x43d1a0
// WARP GUID: b28baa02-df63-5acf-953d-61329cc95b2f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40423c, sub_43d100, sub_4094b8, sub_404028
// [被调用的父级函数]: sub_43d2b0, sub_43d81c
// ============================================================

int32_t __convention("regparm")sub_43d1a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    char var_204 = 0
    
    if (arg1[0xb] != 0)
        int32_t __saved_ebp
        HMENU eax_2
        void* edx_2
        eax_2, edx_2 = (*(*arg1 + 0x34))(&__saved_ebp)
        sub_43d100(eax_2, edx_2)
    
    int32_t eax_7
    
    if (arg1[0xc] != 0)
        eax_7 = sub_4094b8(sub_40423c(arg1[0xc]), &var_204)
    
    if (arg1[0xc] == 0 || eax_7 != 0)
        result.b = 1
        sub_404028(&arg1[0xc], &var_204, 0x200)
    
    return result
}
