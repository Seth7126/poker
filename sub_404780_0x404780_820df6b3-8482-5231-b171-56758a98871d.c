// ============================================================
// 函数名称: sub_404780
// 虚拟地址: 0x404780
// WARP GUID: 820df6b3-8482-5231-b171-56758a98871d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4027e0, sub_4050e8, sub_404754, sub_405b40, sub_405500, sub_403df8, sub_404500, sub_404780, sub_4044e8, sub_403e1c
// [被调用的父级函数]: sub_49e018, sub_404868, sub_4b1dec, sub_502b8c, sub_4ee2a0, sub_4ade94, sub_44ceef, sub_49eb18, sub_40e4c0, sub_4673b7, sub_4d88f8, sub_4a3628, sub_4123d8, sub_44cf07, sub_518320, j_sub_404780, sub_405500, sub_466e1b, sub_40d8c4, sub_44ce65, sub_4b65f8, sub_4122ec, sub_404780, sub_4ec7d7, sub_41fdd8
// ============================================================

void __convention("regparm")sub_404780(int32_t* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg3 == 0)
    if (arg3 == 0)
        return 
    
    int32_t* var_4_1 = arg1
    int32_t* ebx_1 = arg1
    int32_t i_5 = arg3
    arg1.b = *arg2
    int32_t edx
    edx.b = arg2[1]
    int32_t ebp
    
    switch (arg1.b)
        case 0xa
            if (arg3 s> 1)
                sub_403e1c(ebx_1, arg3)
            else
                sub_403df8(ebx_1)
        case 0xb
            if (arg3 s> 1)
                sub_404500(ebx_1, arg3)
            else
                sub_4044e8(ebx_1)
        case 0xc
            int32_t i_1
            
            do
                int32_t* eax_3 = ebx_1
                ebx_1 = &ebx_1[4]
                sub_4050e8(eax_3)
                i_1 = i_5
                i_5 -= 1
            while (i_1 s> 1)
        case 0xd
            int32_t var_14_1 = ebp
            int32_t i_2
            
            do
                ebx_1 += *(arg2 + edx + 2)
                *(arg2 + edx + 6)
                **(arg2 + edx + 0xa)
                sub_404780()
                i_2 = i_5
                i_5 -= 1
            while (i_2 s> 1)
        case 0xe
            int32_t var_14_2 = ebp
            int32_t i_3
            
            do
                int32_t* eax_5 = ebx_1
                ebx_1 += *(arg2 + edx + 2)
                sub_404754(eax_5, arg2)
                i_3 = i_5
                i_5 -= 1
            while (i_3 s> 1)
        case 0xf
            int32_t i_4
            
            do
                int32_t* eax_6 = ebx_1
                ebx_1 = &ebx_1[1]
                sub_405b40(eax_6)
                i_4 = i_5
                i_5 -= 1
            while (i_4 s> 1)
        default
            if (arg1.b != 0x11)
                int32_t* eax
                eax.b = 2
                noreturn sub_4027e0(eax) __tailcall
            
            int32_t i
            
            do
                int32_t* eax_7 = ebx_1
                ebx_1 = &ebx_1[1]
                sub_405500(eax_7, arg2)
                i = i_5
                i_5 -= 1
            while (i s> 1)
}
