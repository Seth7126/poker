// ============================================================
// 函数名称: sub_414d38
// 虚拟地址: 0x414d38
// WARP GUID: e3cb1375-e51a-59ab-8f33-8a01a215b0be
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_403df8, sub_409ae0
// [被调用的父级函数]: sub_414da8
// ============================================================

int32_t* __convention("regparm")sub_414d38(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    int32_t* result = arg2
    sub_403df8(result)
    
    if (data_53161c != 0)
        sub_403e4c(arg2, arg1)
        
        while (true)
            *arg2
            result = data_53161c()
            
            if (result == 0)
                break
            
            esi += 1
            char* var_14 = arg1
            char var_10_1 = 0xb
            int32_t var_c_1 = esi
            char var_8_1 = 0
            sub_409ae0(1, &var_14, "%s_%d", arg2)
    
    return result
}
