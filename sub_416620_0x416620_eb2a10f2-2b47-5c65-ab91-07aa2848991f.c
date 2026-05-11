// ============================================================
// 函数名称: sub_416620
// 虚拟地址: 0x416620
// WARP GUID: eb2a10f2-2b47-5c65-ab91-07aa2848991f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_4030d0, sub_41060c, sub_415d64, sub_416724, sub_403430
// [被调用的父级函数]: sub_4363d8, sub_4362e0
// ============================================================

int32_t __convention("regparm")sub_416620(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    int32_t edx
    edx.b = arg2.b & 0xfc
    sub_415d64(arg1, edx)
    
    while (true)
        int32_t* esi_1 = arg1[0x10]
        
        if (esi_1[2] s<= 0)
            break
        
        sub_416724(arg1, sub_41060c(esi_1))
    
    int32_t result = sub_4030d0(arg1[0x10])
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
