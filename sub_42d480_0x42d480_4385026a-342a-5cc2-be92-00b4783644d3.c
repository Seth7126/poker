// ============================================================
// 函数名称: sub_42d480
// 虚拟地址: 0x42d480
// WARP GUID: 4385026a-342a-5cc2-be92-00b4783644d3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42abc0, sub_42aebc, sub_416178, sub_4032ac
// [被调用的父级函数]: sub_423b8c, sub_442958, sub_491a24, sub_424de4
// ============================================================

int32_t __convention("regparm")sub_42d480(int32_t* arg1)
{
    // 第一条实际指令: sub_416178(arg1)
    sub_416178(arg1)
    
    if (sub_42abc0(arg1) != 0)
        int32_t ecx
        ecx.b = 1
        int32_t ebx
        ebx.w = 0xfff0
        sub_4032ac(arg1, sub_42abc0(arg1), ecx)
    
    return sub_42aebc(arg1)
}
