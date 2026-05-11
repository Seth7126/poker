// ============================================================
// 函数名称: sub_4363d8
// 虚拟地址: 0x4363d8
// WARP GUID: f90229dc-6ee2-582b-983d-27c085b387ec
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403430, sub_403420, sub_416620, sub_4367cc
// [被调用的父级函数]: sub_4369f8
// ============================================================

int32_t __convention("regparm")sub_4363d8(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    void* eax = arg1[0x13]
    
    if (eax != 0)
        sub_4367cc(eax, arg1)
    
    int32_t edx_1
    edx_1.b = arg2.b & 0xfc
    int32_t result = sub_416620(arg1, edx_1)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
