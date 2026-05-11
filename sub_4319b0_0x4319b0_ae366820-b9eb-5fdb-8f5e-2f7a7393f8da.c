// ============================================================
// 函数名称: sub_4319b0
// 虚拟地址: 0x4319b0
// WARP GUID: ae366820-b9eb-5fdb-8f5e-2f7a7393f8da
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos
// [内部子函数调用]: sub_4032ac, sub_431bcc, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4319b0(int32_t* arg1)
{
    // 第一条实际指令: if ((arg1[8].b & 1) != 0 || sub_431bcc(arg1).b == 0)
    if ((arg1[8].b & 1) != 0 || sub_431bcc(arg1).b == 0)
        return 
    
    SetWindowPos(sub_4318d0(arg1), nullptr, 0, 0, arg1[0xe], arg1[0xf], 0x16)
    int32_t* ebx
    ebx.w = 0xffd5
    sub_4032ac(arg1)
}
