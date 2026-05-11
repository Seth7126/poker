// ============================================================
// 函数名称: sub_4312b4
// 虚拟地址: 0x4312b4
// WARP GUID: f6714313-7838-58bd-a43f-22728062dc81
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4310a8, sub_440ee0, sub_42c754
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4312b4(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: *(arg2 + 0xc) = 1
    *(arg2 + 0xc) = 1
    char result = sub_4310a8(arg1, arg2)
    
    if (result == 0)
        if ((arg1[8].b & 0x10) == 0)
            *(arg2 + 4)
            sub_42c754(arg1, arg1)
            int32_t eax_2 = *(arg2 + 8)
            int32_t* eax_4 = sub_440ee0(arg1)
            *(arg2 + 4)
            sub_42c754(eax_4, eax_2)
        
        result = 0
        *(arg2 + 0xc) = 0
    
    return result
}
