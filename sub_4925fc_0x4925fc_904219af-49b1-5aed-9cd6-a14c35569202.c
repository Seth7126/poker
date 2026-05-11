// ============================================================
// 函数名称: sub_4925fc
// 虚拟地址: 0x4925fc
// WARP GUID: 904219af-49b1-5aed-9cd6-a14c35569202
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_492528, sub_491c5c, sub_42b994, sub_491e20
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4925fc(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = sub_42b994(arg1, 0)
    int32_t result = sub_42b994(arg1, 0)
    
    if (arg1[0xa4].b != 0 && *(arg1 + 0x291) != 0)
        *(arg1 + 0x291) = 0
        int32_t ecx_2
        int32_t edx_2
        ecx_2, edx_2 = sub_491e20(arg1, *(arg1 + 0x292), arg1[0xa5])
        edx_2.b = *(arg1 + 0x292)
        int32_t edx_3
        result, edx_3 = sub_492528(arg1, edx_2, ecx_2)
        
        if (arg1[0xc1].b != 0 && arg1[0xbb] == 0 && *(arg1 + 0x2c9) != 0)
            edx_3.b = *(arg1 + 0x292)
            int32_t ebx
            ebx.w = 0xffb6
            sub_4032ac(arg1, edx_3)
            result = sub_491c5c(arg1)
    
    arg1[0xa4].b = 0
    return result
}
