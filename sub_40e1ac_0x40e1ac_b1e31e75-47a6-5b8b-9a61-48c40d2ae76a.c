// ============================================================
// 函数名称: sub_40e1ac
// 虚拟地址: 0x40e1ac
// WARP GUID: b1e31e75-47a6-5b8b-9a61-48c40d2ae76a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40e200
// ============================================================

void* __convention("regparm")sub_40e1ac(int32_t arg1, int32_t* arg2, char* arg3)
{
    // 第一条实际指令: arg2[4]
    arg2[4]
    int32_t edi = arg2[2]
    char temp0 = *(arg2 + 0xb)
    
    if (temp0 u<= 0xfe)
        if (temp0 u< 0xfe)
            return edi()
        
        return (*(sx.d(edi.w) + *arg1))()
    
    char* edi_4 = (edi & 0xffffff) + arg1
    void* result = **arg2
    int32_t count
    count.b = *(result + 1)
    count.b = *(result + count + 2)
    result.b = *arg3
    
    if (result.b u>= count.b)
        result.b = count.b
    
    *edi_4 = result.b
    count.b = result.b
    __builtin_memcpy(&edi_4[1], &arg3[1], count)
    return result
}
