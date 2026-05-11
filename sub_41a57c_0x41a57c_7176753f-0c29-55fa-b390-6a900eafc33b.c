// ============================================================
// 函数名称: sub_41a57c
// 虚拟地址: 0x41a57c
// WARP GUID: 7176753f-0c29-55fa-b390-6a900eafc33b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreatePalette
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41a478
// ============================================================

HPALETTEsub_41a57c(int32_t* arg1 @ ebp)
{
    // 第一条实际指令: HPALETTE result = CreatePalette(&arg1[-0x102])
    HPALETTE result = CreatePalette(&arg1[-0x102])
    *arg1
    return result
}
