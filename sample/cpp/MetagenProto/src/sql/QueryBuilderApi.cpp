// GENERATED BY METAGEN
#include "QueryBuilderApi.h"

using namespace sql;

QueryBuilderApi::InitialStep::InitialStep(QueryBuilderImpl::Content _content) {
    content = _content;
}

QueryBuilderApi::PostSelectStep QueryBuilderApi::InitialStep::select(std::vector<std::string> columns) {
    QueryBuilderImpl::Logic::selectTransitionSelect(content, columns);
    return QueryBuilderApi::PostSelectStep(content);
}

QueryBuilderApi::PostSelectStep::PostSelectStep(QueryBuilderImpl::Content _content) {
    content = _content;
}

QueryBuilderApi::PostFromStep QueryBuilderApi::PostSelectStep::from(std::string table) {
    QueryBuilderImpl::Logic::fromTransitionFrom(content, table);
    return QueryBuilderApi::PostFromStep(content);
}

QueryBuilderApi::PostFromStep::PostFromStep(QueryBuilderImpl::Content _content) {
    content = _content;
}

std::string QueryBuilderApi::PostFromStep::build() {
    return QueryBuilderImpl::Logic::buildQueryTransformationBuild(content);
}

QueryBuilderApi::PostWhereStep QueryBuilderApi::PostFromStep::where(std::string expression) {
    QueryBuilderImpl::Logic::whereTransitionWhere(content, expression);
    return QueryBuilderApi::PostWhereStep(content);
}

QueryBuilderApi::PostGroupByStep QueryBuilderApi::PostFromStep::groupBy(std::string column) {
    QueryBuilderImpl::Logic::groupByTransitionGroupBy(content, column);
    return QueryBuilderApi::PostGroupByStep(content);
}

QueryBuilderApi::PostOrderByStep QueryBuilderApi::PostFromStep::orderBy(std::vector<std::string> columns) {
    QueryBuilderImpl::Logic::orderByTransitionOrderBy(content, columns);
    return QueryBuilderApi::PostOrderByStep(content);
}

QueryBuilderApi::PostWhereStep::PostWhereStep(QueryBuilderImpl::Content _content) {
    content = _content;
}

std::string QueryBuilderApi::PostWhereStep::build() {
    return QueryBuilderImpl::Logic::buildQueryTransformationBuild(content);
}

QueryBuilderApi::PostGroupByStep QueryBuilderApi::PostWhereStep::groupBy(std::string column) {
    QueryBuilderImpl::Logic::groupByTransitionGroupBy(content, column);
    return QueryBuilderApi::PostGroupByStep(content);
}

QueryBuilderApi::PostOrderByStep QueryBuilderApi::PostWhereStep::orderBy(std::vector<std::string> columns) {
    QueryBuilderImpl::Logic::orderByTransitionOrderBy(content, columns);
    return QueryBuilderApi::PostOrderByStep(content);
}

QueryBuilderApi::PostGroupByStep::PostGroupByStep(QueryBuilderImpl::Content _content) {
    content = _content;
}

std::string QueryBuilderApi::PostGroupByStep::build() {
    return QueryBuilderImpl::Logic::buildQueryTransformationBuild(content);
}

QueryBuilderApi::PostOrderByStep QueryBuilderApi::PostGroupByStep::orderBy(std::vector<std::string> columns) {
    QueryBuilderImpl::Logic::orderByTransitionOrderBy(content, columns);
    return QueryBuilderApi::PostOrderByStep(content);
}

QueryBuilderApi::PostOrderByStep::PostOrderByStep(QueryBuilderImpl::Content _content) {
    content = _content;
}

QueryBuilderApi::PostOrderDirectionStep QueryBuilderApi::PostOrderByStep::asc() {
    QueryBuilderImpl::Logic::orderDirectionTransitionAsc(content);
    return QueryBuilderApi::PostOrderDirectionStep(content);
}

QueryBuilderApi::PostOrderDirectionStep QueryBuilderApi::PostOrderByStep::desc() {
    QueryBuilderImpl::Logic::orderDirectionTransitionDesc(content);
    return QueryBuilderApi::PostOrderDirectionStep(content);
}

QueryBuilderApi::PostOrderDirectionStep::PostOrderDirectionStep(QueryBuilderImpl::Content _content) {
    content = _content;
}

std::string QueryBuilderApi::PostOrderDirectionStep::build() {
    return QueryBuilderImpl::Logic::buildQueryTransformationBuild(content);
}
