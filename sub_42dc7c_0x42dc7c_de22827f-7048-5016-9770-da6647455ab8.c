// ============================================================
// 函数名称: sub_42dc7c
// 虚拟地址: 0x42dc7c
// WARP GUID: de22827f-7048-5016-9770-da6647455ab8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42e078
// ============================================================

int32_t __convention("regparm")sub_42dc7c(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    var_8:3.b = arg3.b
    int32_t result = 0
    int32_t ebx
    ebx.b = var_8:3.b
    char temp0 = ebx.b
    ebx.b -= 1
    
    if (temp0 == 1)
        result.b = *(arg2 + 0x34) s> *(arg1 + 0x34)
    else
        char temp1_1 = ebx.b
        ebx.b -= 1
        
        if (temp1_1 == 1)
            result.b = *(arg2 + 0x34) + *(arg2 + 0x3c) s<= *(arg1 + 0x34) + *(arg1 + 0x3c)
        else
            char temp2_1 = ebx.b
            ebx.b -= 1
            
            if (temp2_1 == 1)
                result.b = *(arg2 + 0x30) s> *(arg1 + 0x30)
            else
                char temp3_1 = ebx.b
                ebx.b -= 1
                
                if (temp3_1 == 1)
                    result.b = *(arg2 + 0x30) + *(arg2 + 0x38) s<= *(arg1 + 0x30) + *(arg1 + 0x38)
    
    return result
}
