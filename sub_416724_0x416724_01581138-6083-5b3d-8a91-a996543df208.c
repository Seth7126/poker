// ============================================================
// 函数名称: sub_416724
// 虚拟地址: 0x416724
// WARP GUID: 01581138-6083-5b3d-8a91-a996543df208
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524, sub_410414
// [被调用的父级函数]: sub_416598, sub_416620, sub_41653c
// ============================================================

void* __convention("regparm")sub_416724(void* arg1, void* arg2)
{
    // 第一条实际指令: void* result = *(arg1 + 0x40)
    void* result = *(arg1 + 0x40)
    int32_t esi_1 = *(result + 8) - 1
    
    if (esi_1 s>= 0)
        int32_t i_1 = esi_1 + 1
        int32_t ebx_1 = 0
        int32_t i
        
        do
            result = sub_410524(*(arg1 + 0x40), ebx_1)
            
            if (arg2 == result)
                *(arg2 + 0x10) = 0
                return sub_410414(*(arg1 + 0x40), ebx_1)
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
