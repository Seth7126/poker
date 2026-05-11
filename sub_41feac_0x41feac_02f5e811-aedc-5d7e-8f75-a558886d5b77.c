// ============================================================
// 函数名称: sub_41feac
// 虚拟地址: 0x41feac
// WARP GUID: 02f5e811-aedc-5d7e-8f75-a558886d5b77
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetStockObject, InitializeCriticalSection, LoadIconA
// [内部子函数调用]: sub_41f9ac, sub_41fa28, sub_40ff80, sub_41078c, sub_41faf8, sub_417ccc
// [被调用的父级函数]: 无
// ============================================================

voidsub_41feac()
{
    // 第一条实际指令: int32_t temp0 = data_531658
    int32_t temp0 = data_531658
    data_531658 -= 1
    
    if (temp0 u>= 1)
        return 
    
    sub_41f9ac()
    InitializeCriticalSection(&data_531670)
    InitializeCriticalSection(&data_531688)
    data_531660 = GetStockObject(BLACK_PEN)
    data_531664 = GetStockObject(HOLLOW_BRUSH)
    data_531668 = GetStockObject(SYSTEM_FONT)
    data_53166c = LoadIconA(nullptr, 0x7f00)
    int32_t ecx_1
    int32_t edx_1
    ecx_1, edx_1 = sub_41fa28()
    ecx_1.w = 0x2c
    edx_1.b = 1
    int32_t* eax_5
    int32_t ecx_2
    int32_t edx_2
    eax_5, ecx_2, edx_2 = sub_417ccc(0x417ca4, edx_1, ecx_1)
    data_5316a0 = eax_5
    ecx_2.w = 0x10
    edx_2.b = 1
    int32_t* eax_6
    int32_t ecx_3
    int32_t edx_3
    eax_6, ecx_3, edx_3 = sub_417ccc(0x417ca4, edx_2, ecx_2)
    data_5316a4 = eax_6
    ecx_3.w = 0x10
    edx_3.b = 1
    int32_t* eax_7
    int32_t edx_4
    eax_7, edx_4 = sub_417ccc(0x417ca4, edx_3, ecx_3)
    data_5316a8 = eax_7
    edx_4.b = 1
    int32_t* eax_8
    int32_t edx_5
    eax_8, edx_5 = sub_41faf8(sub_41fac9+0x1f, edx_4)
    data_5316b0 = eax_8
    edx_5.b = 1
    int32_t* eax_9
    int32_t edx_6
    eax_9, edx_6 = sub_41078c(sub_40eacb+0x141, edx_5)
    data_52e624 = eax_9
    edx_6.b = 1
    data_5316ac = sub_41078c(sub_40eacb+0x141, edx_6)
    sub_40ff80(sub_416de4, sub_41844c, sub_41843c)
    sub_40ff80(0x416f0c, sub_418654, 0x418644)
}
