// ============================================================
// 函数名称: sub_43dfc8
// 虚拟地址: 0x43dfc8
// WARP GUID: 210dd975-24a3-5695-a9c6-dee5d2333faa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_448578, sub_439178
// [被调用的父级函数]: sub_43e014
// ============================================================

void* __convention("regparm")sub_43dfc8(void* arg1)
{
    // 第一条实际指令: void* result = nullptr
    void* result = nullptr
    
    if (*(data_530a80 + 9) != 0)
        if (*(arg1 + 0x35) != 0)
            HANDLE eax_1 = sub_439178(arg1 + 0x48)
            
            if (eax_1 == 0)
                return sub_448578(*data_530660)
            
            int32_t ebx
            ebx.w = 0xffce
            return sub_4032ac(eax_1)
        
        result.b = *(arg1 + 0x24) == 1
    
    return result
}
