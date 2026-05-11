// ============================================================
// 函数名称: sub_42cefc
// 虚拟地址: 0x42cefc
// WARP GUID: 69e403f0-bd2d-5972-848a-aa6fc28a1c04
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754, sub_42b984, sub_42b994
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42cefc(int32_t* arg1)
{
    // 第一条实际指令: (*(*arg1 - 0x10))()
    (*(*arg1 - 0x10))()
    char result = sub_42b984(arg1)
    
    if (result == 0)
        arg1[0x11].w &= 0xfffe
    else
        result = sub_42b994(arg1, 0)
        
        if ((arg1[0x11].b & 1) != 0)
            sub_42c754(arg1, 0xffffffff)
            return 0
    
    return result
}
