// ============================================================
// 函数名称: sub_443b40
// 虚拟地址: 0x443b40
// WARP GUID: f81bd66f-7fc3-5ee7-9366-528c1c6d29b8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4471f4, sub_4471e0, sub_4318d0
// [被调用的父级函数]: sub_444090
// ============================================================

int32_t __convention("regparm")sub_443b40(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_4 = (*data_530440)(sub_4318d0(arg1), 2)
    int32_t eax_4 = (*data_530440)(sub_4318d0(arg1), 2)
    int32_t esi_1 = sub_4471f4(data_5317dc) - 1
    
    if (esi_1 s>= 0)
        int32_t i_1 = esi_1 + 1
        int32_t ebx_1 = 0
        int32_t i
        
        do
            if (eax_4 == *(sub_4471e0(data_5317dc, ebx_1) + 4))
                return sub_4471e0(data_5317dc, ebx_1)
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return 0
}
