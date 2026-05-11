// ============================================================
// 函数名称: sub_4430c0
// 虚拟地址: 0x4430c0
// WARP GUID: 0e00c2b6-0cfc-500a-a2a4-4eb5b0ac11c8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_416358, sub_41631c, sub_403248, sub_416348, sub_42e838, sub_431e68
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_4430c0(void* arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    
    if (sub_403248(arg2, &data_4279b4) != 0)
        return sub_431e68(arg3, arg2)
    
    void* var_18_1 = arg3 - sub_42e838(arg1)
    BOOL result_1 = 0xffffffff
    BOOL result = sub_416348(arg1)
    
    if (result - 1 s>= 0)
        int32_t esi_3 = result
        int32_t edi_1 = 0
        int32_t i
        
        do
            ebx.w = 0xfff2
            result = sub_4032ac(sub_41631c(arg1, edi_1))
            
            if (result.b == 0)
                result_1 += 1
                result = result_1
                
                if (result == var_18_1)
                    return sub_416358(arg2, edi_1)
            
            edi_1 += 1
            i = esi_3
            esi_3 -= 1
        while (i != 1)
    
    return result
}
