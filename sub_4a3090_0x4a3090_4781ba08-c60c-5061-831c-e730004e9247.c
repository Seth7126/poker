// ============================================================
// 函数名称: sub_4a3090
// 虚拟地址: 0x4a3090
// WARP GUID: 4781ba08-c60c-5061-831c-e730004e9247
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a30d8
// [被调用的父级函数]: sub_4a8ea2, sub_4a8f18, sub_4a80d4, sub_4a3d84
// ============================================================

uint32_t __fastcallsub_4a3090(int32_t arg1, char arg2)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    var_8:3.b = arg1.b
    uint32_t result = sub_4a30d8()
    
    if (result.b != 0)
        result.b = *(data_52fbf8 + 0x2c) == 0
        
        if ((arg2 | result.b) != 0 || var_8:3.b != 0)
            result = data_52fbf8
            
            if (*(result + 0x24) != 0)
                return (*(*data_52fbf8 + 0x30))()
    
    return result
}
