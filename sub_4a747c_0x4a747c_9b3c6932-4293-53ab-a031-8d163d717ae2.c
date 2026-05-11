// ============================================================
// 函数名称: sub_4a747c
// 虚拟地址: 0x4a747c
// WARP GUID: 9b3c6932-4293-53ab-a031-8d163d717ae2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_4128c0
// [被调用的父级函数]: sub_4a6faf
// ============================================================

int32_t __convention("regparm")sub_4a747c(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_403df8(arg2)
    sub_403df8(arg2)
    
    if ((*(*arg1 + 0x54))() != 0)
        (*(*arg1 + 0x6c))(1)
    
    sub_4128c0(arg1[0x1b])
    return (*(*arg1[0x1b] + 0x14))()
}
