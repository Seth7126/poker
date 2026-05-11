// ============================================================
// 函数名称: sub_42bdf4
// 虚拟地址: 0x42bdf4
// WARP GUID: c0cd4750-67fd-59c0-a5dc-01241a0994b9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCursorPos
// [内部子函数调用]: sub_403828, sub_42b31c, sub_403248, sub_42c754, sub_42c788, sub_40b56c, sub_407814, sub_429cf8
// [被调用的父级函数]: sub_43550c, sub_446ce8, sub_42bddc, sub_425fce, sub_4452e4
// ============================================================

void* const __convention("regparm")sub_42bdf4(int32_t* arg1, char arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi = arg3
    int32_t esi = arg3
    
    if (sub_403248(arg1, &data_43f580) != 0 && *(arg1 + 0x8b) != 1)
        sub_40b56c(sub_40eacb+0x7d, sub_43f190+0x371, data_530700)
        sub_403828()
        noreturn
    
    void* const result = sub_42c788(arg1)
    
    if (data_531760 == 0 || data_531760 == 0xffffffff)
        result = nullptr
        data_531760 = 0
        
        if ((arg1[0x11].b & 1) != 0)
            int32_t point
            GetCursorPos(&point)
            int32_t point_1
            sub_42b31c(arg1, &point, &point_1)
            point = point_1
            int32_t var_10
            int32_t var_18_1 = var_10
            result = sub_42c754(arg1, sub_407814(&point))
        
        if (esi s< 0)
            result = data_531750
            esi = *(result + 8)
        
        if (data_531760 != 0xffffffff)
            return sub_429cf8(arg1, arg2, esi)
    
    return result
}
