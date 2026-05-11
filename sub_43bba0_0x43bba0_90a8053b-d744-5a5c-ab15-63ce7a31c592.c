// ============================================================
// 函数名称: sub_43bba0
// 虚拟地址: 0x43bba0
// WARP GUID: 90a8053b-d744-5a5c-ab15-63ce7a31c592
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b964, sub_439f30, sub_410414, sub_4391ac, sub_410524
// [被调用的父级函数]: sub_43bcb4
// ============================================================

int32_t __convention("regparm")sub_43bba0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 s>= 0 && arg1[0x14] != 0 && arg2 s< sub_43b964(arg1))
    if (arg2 s>= 0 && arg1[0x14] != 0 && arg2 s< sub_43b964(arg1))
        void* eax_4 = sub_410524(arg1[0x14], arg2)
        sub_410414(arg1[0x14], arg2)
        *(eax_4 + 0x58) = 0
        *(eax_4 + 0x78) = 0
        *(eax_4 + 0x7c) = 0
        
        if (arg1[0xa] != 0)
            sub_439f30(arg1)
        
        int32_t eax_8
        int32_t edx_2
        eax_8, edx_2 = sub_43b964(arg1)
        edx_2.b = eax_8 == 0
        return (*(*arg1 + 0x38))()
    
    sub_4391ac(data_530390)
    noreturn
}
