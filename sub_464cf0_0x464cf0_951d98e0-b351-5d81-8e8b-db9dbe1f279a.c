// ============================================================
// 函数名称: sub_464cf0
// 虚拟地址: 0x464cf0
// WARP GUID: 951d98e0-b351-5d81-8e8b-db9dbe1f279a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_464c08
// [被调用的父级函数]: sub_464d1c, sub_465154
// ============================================================

void __convention("regparm")sub_464cf0(uint32_t arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t i = arg3
    int32_t i = arg3
    char* ebx = arg2
    
    if (*(arg1 + 0xc) != 0 || i u<= 0)
        return 
    
    do
        sub_464c08(arg1, sx.d(*ebx), 1)
        ebx = &ebx[1]
        i -= 1
    while (i u> 0)
}
