// ============================================================
// 函数名称: sub_41653c
// 虚拟地址: 0x41653c
// WARP GUID: b520abbd-4abd-5bbe-821f-e8d257fb6106
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_403430, sub_416724, sub_4030c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41653c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = sub_403430(arg1, arg2)
    int32_t ecx = sub_403430(arg1, arg2)
    void* eax = arg1[4]
    
    if (eax != 0)
        ecx = sub_416724(eax, arg1)
    
    int32_t edx_1
    edx_1.b = arg2.b & 0xfc
    int32_t result = sub_4030c0(ecx, edx_1)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
