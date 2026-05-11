// ============================================================
// 函数名称: sub_443aa4
// 虚拟地址: 0x443aa4
// WARP GUID: 0488fd8a-6017-5b66-92a8-6d26529c7413
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_447210, sub_447224
// [被调用的父级函数]: sub_44374c, sub_4461e0, sub_44370c, sub_444fdc
// ============================================================

int32_t __convention("regparm")sub_443aa4(void* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (*(arg1 + 0x217) == 2 && *(arg1 + 0x23c) != 0)
        int32_t ebx_2 = sub_447224(data_5317dc) - 1
        
        if (ebx_2 s>= 0)
            int32_t i_1 = ebx_2 + 1
            int32_t esi_1 = 0
            int32_t i
            
            do
                if (*(sub_447210(data_5317dc, esi_1) + 0x217) == 1)
                    result += 1
                
                esi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return result
}
