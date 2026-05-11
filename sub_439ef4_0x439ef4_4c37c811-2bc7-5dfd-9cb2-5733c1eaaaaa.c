// ============================================================
// 函数名称: sub_439ef4
// 虚拟地址: 0x439ef4
// WARP GUID: 4c37c811-2bc7-5dfd-9cb2-5733c1eaaaaa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_43b94c, sub_416178, sub_439f30
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_439ef4(int32_t* arg1)
{
    // 第一条实际指令: sub_416178(arg1)
    sub_416178(arg1)
    int32_t result = sub_43b94c(arg1)
    
    if (result != 0)
        int32_t ecx
        ecx.b = 1
        int32_t ebx
        ebx.w = 0xfff0
        result = sub_4032ac(arg1, sub_43b94c(arg1), ecx)
    
    if (arg1[0x1a].b == 0)
        return result
    
    return sub_439f30(arg1)
}
