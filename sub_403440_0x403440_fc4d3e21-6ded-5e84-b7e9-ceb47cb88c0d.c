// ============================================================
// 函数名称: sub_403440
// 虚拟地址: 0x403440
// WARP GUID: fc4d3e21-6ded-5e84-b7e9-ceb47cb88c0d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RaiseException
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_403844
// ============================================================

voidsub_403440()
{
    // 第一条实际指令: if (data_52e008 u<= 1)
    if (data_52e008 u<= 1)
        return 
    
    RaiseException(0xeedfadf, 0, 0, nullptr)
    noreturn
}
