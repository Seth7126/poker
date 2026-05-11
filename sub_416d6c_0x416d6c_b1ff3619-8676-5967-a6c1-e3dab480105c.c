// ============================================================
// 函数名称: sub_416d6c
// 虚拟地址: 0x416d6c
// WARP GUID: b1ff3619-8676-5967-a6c1-e3dab480105c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InitializeCriticalSection
// [内部子函数调用]: sub_4030a0, sub_40c8fc, sub_40597c, sub_41078c
// [被调用的父级函数]: 无
// ============================================================

voidsub_416d6c()
{
    // 第一条实际指令: int32_t temp0 = data_531620
    int32_t temp0 = data_531620
    data_531620 -= 1
    
    if (temp0 u>= 1)
        return 
    
    InitializeCriticalSection(&data_531634)
    sub_40597c()
    int32_t edx_1
    edx_1.b = 1
    int32_t* eax_2
    int32_t edx_2
    eax_2, edx_2 = sub_40c8fc(sub_408781+0x1f, edx_1)
    data_531618 = eax_2
    edx_2.b = 1
    int32_t* eax_3
    int32_t ecx_1
    int32_t edx_3
    eax_3, ecx_1, edx_3 = sub_41078c(sub_40eacb+0x141, edx_2)
    data_531624 = eax_3
    edx_3.b = 1
    int32_t eax_5
    int32_t edx_4
    eax_5, edx_4 = sub_4030a0(ecx_1, edx_3)
    data_531628 = eax_5
    edx_4.b = 1
    int32_t* eax_6
    int32_t edx_5
    eax_6, edx_5 = sub_41078c(sub_40eacb+0x141, edx_4)
    data_53162c = eax_6
    edx_5.b = 1
    data_531630 = sub_41078c(sub_40eacb+0x141, edx_5)
}
