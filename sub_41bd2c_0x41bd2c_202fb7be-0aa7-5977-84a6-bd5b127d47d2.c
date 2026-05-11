// ============================================================
// 函数名称: sub_41bd2c
// 虚拟地址: 0x41bd2c
// WARP GUID: 202fb7be-0aa7-5977-84a6-bd5b127d47d2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41b934, sub_41b738
// [被调用的父级函数]: sub_4669ec
// ============================================================

void __fastcallsub_41bd2c(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (data_52e620 != 0)
    if (data_52e620 != 0)
        sub_41b738(data_52e620, arg2)
    
    if (data_52e61c != 0)
        sub_41b934(data_52e61c, arg2)
}
